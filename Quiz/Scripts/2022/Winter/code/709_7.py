try:
    
    try:
        print(1, end="")
        print(int("6"), end="")
        print(8, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    except TypeError: 
        print(3, end="")
    else:
        print(5, end="")
    finally:
        print(2, end="")
    
except: print('error')
