try:
    
    try:
        print(3, end="")
        print(int("b9"), end="")
        print(3, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    except TypeError: 
        print(0, end="")
    else:
        print(4, end="")
    finally:
        print(2, end="")
    
except: print('error')
