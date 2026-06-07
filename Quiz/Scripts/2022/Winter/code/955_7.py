try:
    
    try:
        print(9, end="")
        print(5<=1, end="")
        print(8, end="")
    except Exception: 
        print(5, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    else:
        print(7, end="")
    finally:
        print(0, end="")
    
except: print('error')
