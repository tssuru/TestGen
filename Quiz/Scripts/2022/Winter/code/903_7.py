try:
    
    try:
        print(4, end="")
        print(int("b5"), end="")
        print(8, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    except TypeError: 
        print(2, end="")
    else:
        print(7, end="")
    finally:
        print(8, end="")
    
except: print('error')
