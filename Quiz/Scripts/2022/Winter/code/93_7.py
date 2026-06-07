try:
    
    try:
        print(1, end="")
        print(int(0%2), end="")
        print(5, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    except ZeroDivisionError: 
        print(8, end="")
    else:
        print(6, end="")
    finally:
        print(7, end="")
    
except: print('error')
