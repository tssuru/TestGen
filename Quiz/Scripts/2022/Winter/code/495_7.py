try:
    
    try:
        print(6, end="")
        print(int(1%0), end="")
        print(6, end="")
    except TypeError: 
        print(7, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    else:
        print(0, end="")
    finally:
        print(1, end="")
    
except: print('error')
