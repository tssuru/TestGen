try:
    
    try:
        print(7, end="")
        print(4==7, end="")
        print(0, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    else:
        print(4, end="")
    finally:
        print(9, end="")
    
except: print('error')
