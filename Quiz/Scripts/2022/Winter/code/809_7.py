try:
    
    try:
        print(2, end="")
        print(8>5, end="")
        print(4, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    except ValueError: 
        print(8, end="")
    else:
        print(4, end="")
    finally:
        print(6, end="")
    
except: print('error')
