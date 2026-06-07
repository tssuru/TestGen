try:
    
    try:
        print(6, end="")
        print(int("4"), end="")
        print(1, end="")
    except TypeError: 
        print(0, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    else:
        print(2, end="")
    finally:
        print(1, end="")
    
except: print('error')
