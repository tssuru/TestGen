try:
    
    try:
        print(0, end="")
        print(5<6, end="")
        print(8, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    except TypeError: 
        print(3, end="")
    else:
        print(4, end="")
    finally:
        print(2, end="")
    
except: print('error')
