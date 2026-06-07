try:
    
    try:
        print(7, end="")
        print(int(9%2), end="")
        print(5, end="")
    except ZeroDivisionError: 
        print(4, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    else:
        print(2, end="")
    finally:
        print(0, end="")
    
except: print('error')
