try:
    
    try:
        print(9, end="")
        print(5>6, end="")
        print(3, end="")
    except ZeroDivisionError: 
        print(8, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    else:
        print(5, end="")
    finally:
        print(6, end="")
    
except: print('error')
