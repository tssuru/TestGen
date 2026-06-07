try:
    
    try:
        print(0, end="")
        print(int(8%0), end="")
        print(5, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    except ZeroDivisionError: 
        print(4, end="")
    else:
        print(1, end="")
    finally:
        print(7, end="")
    
except: print('error')
