try:
    
    try:
        print(6, end="")
        print(5==4, end="")
        print(4, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    except TypeError: 
        print(7, end="")
    else:
        print(8, end="")
    finally:
        print(3, end="")
    
except: print('error')
