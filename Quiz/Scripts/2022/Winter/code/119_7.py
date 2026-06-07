try:
    
    try:
        print(7, end="")
        print(9<9, end="")
        print(2, end="")
    except TypeError: 
        print(3, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    else:
        print(6, end="")
    finally:
        print(0, end="")
    
except: print('error')
