try:
    
    try:
        print(0, end="")
        print(int("7"), end="")
        print(3, end="")
    except TypeError: 
        print(3, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    else:
        print(5, end="")
    finally:
        print(6, end="")
    
except: print('error')
