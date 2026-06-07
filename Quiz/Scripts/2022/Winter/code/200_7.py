try:
    
    try:
        print(8, end="")
        print(int("a5"), end="")
        print(3, end="")
    except TypeError: 
        print(4, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    else:
        print(2, end="")
    finally:
        print(0, end="")
    
except: print('error')
