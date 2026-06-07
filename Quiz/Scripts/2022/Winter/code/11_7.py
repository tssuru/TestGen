try:
    
    try:
        print(2, end="")
        print(int("c6"), end="")
        print(1, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    except ValueError: 
        print(0, end="")
    else:
        print(7, end="")
    finally:
        print(3, end="")
    
except: print('error')
