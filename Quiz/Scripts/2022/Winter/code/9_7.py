try:
    
    try:
        print(4, end="")
        print(8==5, end="")
        print(2, end="")
    except TypeError: 
        print(1, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    else:
        print(7, end="")
    finally:
        print(2, end="")
    
except: print('error')
