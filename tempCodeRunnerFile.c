 while (1) {
        printf("\nMenu:\n");
        printf("1. Insert data into singly linked list\n");
        printf("2. Display singly linked list\n");
        printf("3. Insert data at a specific position\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insertData(&head, data);
                break;

            case 2:
                displayList(head);
                break;

            case 3:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("Enter position to insert: ");
                scanf("%d", &position);
                insertAtPosition(&head, data, position);
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
