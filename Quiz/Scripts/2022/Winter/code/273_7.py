try:
    
    try:
        print(0, end="")
        print(int(5%3), end="")
        print(7, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    except ZeroDivisionError: 
        print(1, end="")
    else:
        print(2, end="")
    finally:
        print(0, end="")
    
except: print('error')
