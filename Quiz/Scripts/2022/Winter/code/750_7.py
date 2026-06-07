try:
    
    try:
        print(5, end="")
        print(int("6"), end="")
        print(3, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    except ValueError: 
        print(1, end="")
    else:
        print(8, end="")
    finally:
        print(7, end="")
    
except: print('error')
