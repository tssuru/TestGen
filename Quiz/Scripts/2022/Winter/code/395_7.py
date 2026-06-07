try:
    
    try:
        print(6, end="")
        print(int("9"), end="")
        print(3, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    except TypeError: 
        print(1, end="")
    else:
        print(6, end="")
    finally:
        print(9, end="")
    
except: print('error')
