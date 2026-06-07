try:
    
    try:
        print(0, end="")
        print(int(7%3), end="")
        print(9, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    except TypeError: 
        print(2, end="")
    else:
        print(1, end="")
    finally:
        print(7, end="")
    
except: print('error')
