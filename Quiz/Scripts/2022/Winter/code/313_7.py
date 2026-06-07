try:
    
    try:
        print(7, end="")
        print(int(5/0), end="")
        print(0, end="")
    except TypeError: 
        print(2, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    else:
        print(4, end="")
    finally:
        print(2, end="")
    
except: print('error')
