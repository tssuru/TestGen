try:
    a,b,c=9,5,2
    def h(b):
        global c
        a=1
        b*=5
        c=2
        return a+b+c
    
    a,b,c=8,4,3
    print(h(a),a,b,c)
    
except: print('error')
