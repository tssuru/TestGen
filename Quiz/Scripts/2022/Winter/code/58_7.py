try:
    
    try:
        print(2, end="")
        print(1<=0, end="")
        print(0, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    except Exception: 
        print(3, end="")
    else:
        print(7, end="")
    finally:
        print(4, end="")
    
except: print('error')
