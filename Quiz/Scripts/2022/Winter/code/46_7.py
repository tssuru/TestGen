try:
    
    try:
        print(2, end="")
        print(int(9%0), end="")
        print(0, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    except TypeError: 
        print(8, end="")
    else:
        print(6, end="")
    finally:
        print(1, end="")
    
except: print('error')
