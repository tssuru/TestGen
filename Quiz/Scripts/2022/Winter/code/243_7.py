try:
    
    try:
        print(6, end="")
        print(1>=6, end="")
        print(2, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    except TypeError: 
        print(4, end="")
    else:
        print(5, end="")
    finally:
        print(4, end="")
    
except: print('error')
