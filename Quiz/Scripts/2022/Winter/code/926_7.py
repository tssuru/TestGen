try:
    
    try:
        print(4, end="")
        print(3>=7, end="")
        print(7, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    else:
        print(5, end="")
    finally:
        print(4, end="")
    
except: print('error')
