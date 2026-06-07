try:
    
    try:
        print(9, end="")
        print(int(4/0.0), end="")
        print(0, end="")
    except ZeroDivisionError: 
        print(1, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    else:
        print(6, end="")
    finally:
        print(5, end="")
    
except: print('error')
