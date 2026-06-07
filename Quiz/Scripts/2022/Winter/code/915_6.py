try:
    a,b,c=1,9,3
    def h(b):
        a=5
        b*=3
        c=1
        return a+b+c
    
    a,b,c=8,6,4
    print(h(a),a,b,c)
    
except: print('error')
