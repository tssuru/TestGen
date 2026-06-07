try:
    
    try:
        print(9, end="")
        print(2<=7, end="")
        print(3, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    except Exception: 
        print(7, end="")
    else:
        print(1, end="")
    finally:
        print(4, end="")
    
except: print('error')
