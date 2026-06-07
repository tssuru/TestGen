try:
    
    try:
        print(4, end="")
        print(int(3/0), end="")
        print(6, end="")
    except TypeError: 
        print(0, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    else:
        print(1, end="")
    finally:
        print(3, end="")
    
except: print('error')
