try:
    
    try:
        print(4, end="")
        print(int("c9"), end="")
        print(6, end="")
    except TypeError: 
        print(0, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    else:
        print(7, end="")
    finally:
        print(3, end="")
    
except: print('error')
