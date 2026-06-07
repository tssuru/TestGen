try:
    
    try:
        print(0, end="")
        print(int(1%1), end="")
        print(5, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    except TypeError: 
        print(4, end="")
    else:
        print(2, end="")
    finally:
        print(6, end="")
    
except: print('error')
