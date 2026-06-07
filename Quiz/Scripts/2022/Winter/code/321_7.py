try:
    
    try:
        print(8, end="")
        print(2<7, end="")
        print(6, end="")
    except ValueError: 
        print(7, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    else:
        print(1, end="")
    finally:
        print(9, end="")
    
except: print('error')
