try:
    
    try:
        print(7, end="")
        print(int(4//0), end="")
        print(2, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    except TypeError: 
        print(0, end="")
    else:
        print(5, end="")
    finally:
        print(8, end="")
    
except: print('error')
