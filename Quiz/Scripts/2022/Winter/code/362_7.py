try:
    
    try:
        print(6, end="")
        print(int(9%0.0), end="")
        print(2, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    except TypeError: 
        print(9, end="")
    else:
        print(0, end="")
    finally:
        print(2, end="")
    
except: print('error')
