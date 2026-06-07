try:
    
    try:
        print(2, end="")
        print(int("7"), end="")
        print(3, end="")
    except ValueError: 
        print(6, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    else:
        print(7, end="")
    finally:
        print(5, end="")
    
except: print('error')
