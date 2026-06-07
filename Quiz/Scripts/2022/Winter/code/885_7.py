try:
    
    try:
        print(8, end="")
        print(4>2, end="")
        print(0, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    except ZeroDivisionError: 
        print(2, end="")
    else:
        print(8, end="")
    finally:
        print(5, end="")
    
except: print('error')
