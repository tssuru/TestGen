try:
    
    try:
        print(0, end="")
        print(int("b7"), end="")
        print(6, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    except TypeError: 
        print(1, end="")
    else:
        print(5, end="")
    finally:
        print(0, end="")
    
except: print('error')
