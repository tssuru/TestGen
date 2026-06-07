try:
    
    try:
        print(7, end="")
        print(0==0, end="")
        print(4, end="")
    except TypeError: 
        print(9, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    else:
        print(7, end="")
    finally:
        print(9, end="")
    
except: print('error')
