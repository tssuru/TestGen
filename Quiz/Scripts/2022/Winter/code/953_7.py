try:
    
    try:
        print(4, end="")
        print(int("6"), end="")
        print(0, end="")
    except ValueError: 
        print(9, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    else:
        print(2, end="")
    finally:
        print(6, end="")
    
except: print('error')
