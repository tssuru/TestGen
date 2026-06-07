try:
    
    try:
        print(5, end="")
        print(3>3, end="")
        print(4, end="")
    except Exception: 
        print(9, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    else:
        print(1, end="")
    finally:
        print(8, end="")
    
except: print('error')
