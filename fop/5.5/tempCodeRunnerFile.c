while (fgets(buffer, sizeof(buffer)-1,instream) != NULL)
	fputs(buffer,stdout);
	fclose(instream);