try:
    
    try:
        print(3, end="")
        print(int("d2"), end="")
        print(4, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    except TypeError: 
        print(2, end="")
    else:
        print(6, end="")
    finally:
        print(8, end="")
    
except: print('error')
