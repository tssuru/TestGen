try:
    
    try:
        print(6, end="")
        print(int(5%0), end="")
        print(0, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    except ZeroDivisionError: 
        print(3, end="")
    else:
        print(5, end="")
    finally:
        print(8, end="")
    
except: print('error')
