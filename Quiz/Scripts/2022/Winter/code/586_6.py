try:
    a,b,c=1,7,5
    def h(b):
        global c
        a=4
        b*=3
        c=1
        return a+b+c
    
    a,b,c=9,2,6
    print(h(a),a,b,c)
    
except: print('error')
