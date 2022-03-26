int main(){
    printf("Welcome to public database. Please enter your password.\n");
    // ask for input
    char password[4];
    scanf("%s", password);
    // check if password is correct
    if(strcmp(password, "admin") == 0){
        printf("Access granted.\n");
        // make a boolean variable to check if user is logged in
        int loggedIn = 1;
        while (loggedIn == 1)
        {
            char newcommand[10];
            printf("Enter a command: ");
            scanf("%s", newcommand);
            // check if user wants to log out
            if(strcmp(newcommand, "logout") == 0){
                loggedIn = 0;
                printf("Logged out.\n");
            }
            // check if user wants to add a new user
            else if(strcmp(newcommand, "adduser") == 0){
                printf("Enter a new username: ");
                char newusername[10];
                scanf("%s", newusername);
                printf("Enter a new password: ");
                char newpassword[10];
                scanf("%s", newpassword);
                printf("User %s added.\n", newusername);
            }
            // check if user wants to delete a user
            else if(strcmp(newcommand, "deleteuser") == 0){
                printf("Enter a username: ");
                char username[10];
                scanf("%s", username);
                printf("User %s deleted.\n", username);
            }
            // check if user wants to add a new entry
            else if(strcmp(newcommand, "addentry") == 0){
                printf("Enter a new entry: ");
                char newentry[10];
                scanf("%s", newentry);
                printf("Entry %s added.\n", newentry);
            }
            // check if user wants to delete an entry
            else if(strcmp(newcommand, "deleteentry") == 0){
                printf("Enter an entry: ");
                char entry[10];
                scanf("%s", entry);
                printf("Entry %s deleted.\n", entry);
            }
            // check if user wants to see all entries
            else if(strcmp(newcommand, "showall") == 0){
                printf("All entries:\n");
                printf("entry1\n");
                printf("entry2\n");
                printf("entry3\n");
            }
            // check if user wants to see all users
            else if(strcmp(newcommand, "showusers") == 0){
                printf("All users:\n");
                printf("user1\n");
                printf("user2\n");
                printf("user3\n");
            }
            // check if user wants to see all entries of a user
            else if(strcmp(newcommand, "showentries") == 0){
                printf("Enter a username: ");
                char username[10];
                scanf("%s", username);
                printf("All entries of user %s:\n", username);
                printf("entry1\n");
                printf("entry2\n");
                printf("entry3\n");
            }
            // check if user wants to create a new file
            else if(strcmp(newcommand, "createfile") == 0){
                printf("Enter a filename: ");
                char filename[10];
                scanf("%s", filename);
                printf("File %s created.\n", filename);
            }
        }
        
    }
    else{
        printf("Access denied.\n");
        int loggedIn = 0;
    }
    return 0;
}