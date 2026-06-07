try:
    
    try:
        print(1, end="")
        print(2>4, end="")
        print(1, end="")
    except Exception: 
        print(0, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    else:
        print(6, end="")
    finally:
        print(8, end="")
    
except: print('error')
