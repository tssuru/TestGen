try:
    
    try:
        print(4, end="")
        print(int(1%1), end="")
        print(0, end="")
    except TypeError: 
        print(2, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    else:
        print(9, end="")
    finally:
        print(7, end="")
    
except: print('error')
