try:
    
    try:
        print(5, end="")
        print(7<=3, end="")
        print(3, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    except TypeError: 
        print(4, end="")
    else:
        print(8, end="")
    finally:
        print(5, end="")
    
except: print('error')
