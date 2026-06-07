try:
    
    try:
        print(1, end="")
        print(6>7, end="")
        print(5, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    except Exception: 
        print(6, end="")
    else:
        print(1, end="")
    finally:
        print(8, end="")
    
except: print('error')
